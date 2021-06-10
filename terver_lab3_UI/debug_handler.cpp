#include "debug_handler.h"

System::String^ cs_this(std::string str)
{
	// std::string to System::String
	return gcnew System::String(str.c_str());
}


debug_handler::debug_handler()
{
	last_msg = std::chrono::steady_clock::now();
}


void debug_handler::set_new_target_listbox(System::Windows::Forms::ListBox^ _new_target_listbox)
{
	target_listbox = _new_target_listbox;
	update_auxilliary();
}


void debug_handler::msg(std::string _message, bool _time)
{
	if (_message[0] == '$' && !show_debug) return;
	std::string msg_prefix = "";

	auto cur_msg = std::chrono::steady_clock::now();
	size_t time_since_last_msg = std::chrono::duration_cast<std::chrono::milliseconds>(cur_msg - last_msg).count();
	if (_time || timecode_prefix && use_prefixes)
	{
		if (_message[0] == '#')_message.erase(0, 1);
		if (time_since_last_msg < 99999) msg_prefix += std::to_string(time_since_last_msg) + "ms\t: ";
		else msg_prefix += ">99999ms\t: ";
	}
	else if (use_prefixes)
	{
		if (_message[0] == '$')
		{
			msg_prefix += "debug   \t: ";
			_message.erase(0, 1);
		}
		else if (_message[0] == '#')
		{
			msg_prefix += "info    \t: ";
			_message.erase(0, 1);
		}
		else if (_message[0] == '!')
		{
			msg_prefix += "error   \t: ";
			_message.erase(0, 1);
		}
		else msg_prefix += "        \t: ";
	}

	target_listbox->Items->Insert(target_listbox->Items->Count, cs_this(msg_prefix + _message));

	update_auxilliary();
	clear_if_over_limit();

	last_msg = std::chrono::steady_clock::now();
}

void debug_handler::clear_if_over_limit()
{
	if (autoclear)
	{
		if (current_msg_amount > autoclear_limit)
		{
			target_listbox->Items->RemoveAt(0);
		}
	}
}

template<typename T>
void debug_handler::msg_array(const std::vector<T>& _vector)
{
	size_t str_maxsize = 50;
	std::string str = "[";
	for (auto el : _vector)
	{
		str += s(el) + ", ";
		if (str.size() >= str_maxsize - 1)
		{
			str += "]";
			break;
		}
	}
	msg(str);
}

void debug_handler::clear()
{
	target_listbox->Items->Clear();
	update_auxilliary();
}

void debug_handler::set_autoclear(bool _is_on)
{
	autoclear = _is_on;
}

void debug_handler::set_autoclear_limit(const size_t& _limit)
{
	// limit can't be 0;
	if (_limit > 0) autoclear_limit = _limit;
}

void debug_handler::time_since_last_msg(bool _is_on)
{
	timecode_prefix = _is_on;
}

void debug_handler::prefixes(bool _is_on)
{
	use_prefixes = _is_on;
}

void debug_handler::update_auxilliary()
{
	current_msg_amount = target_listbox->Items->Count;
}

void debug_handler::debug(bool _is_on)
{
	show_debug = _is_on;
}


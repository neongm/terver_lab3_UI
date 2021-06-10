#pragma once
#include <string>
#include <chrono>
#include <vector>
#include <msclr\auto_gcroot.h>
//#include "converters.h"

// ref - managed class, otherwise it will be unmanaged
// it is required for class to be managed for using WF
// elements, or use gcroot<elem^> instead, wtf

class debug_handler
{
private:
	gcroot<System::Windows::Forms::ListBox^> target_listbox; // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
	bool timecode_prefix = false;
	bool use_prefixes = false;
	bool autoclear = false;
	bool show_debug = false;
	size_t autoclear_limit = 50;
	size_t current_msg_amount;
	std::chrono::steady_clock::time_point last_msg;

public:
	debug_handler();
	void set_new_target_listbox(System::Windows::Forms::ListBox^ _new_target_listbox);
	void msg(std::string _message, bool _time = false);
	template<typename T>
	void msg_array(const std::vector<T>& _vector);
	void clear();
	void set_autoclear(bool _is_on);
	void set_autoclear_limit(const size_t& _limit);
	void time_since_last_msg(bool _is_on);
	void prefixes(bool _is_on);
	void debug(bool _is_on);
	void update_auxilliary();
	void clear_if_over_limit();
};


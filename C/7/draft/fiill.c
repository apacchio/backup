tring(int size, char **strs, char *sep, int final_string_length, char *joined_str)
{
	//loop on each string from the strs string array
		while (i < size)
		{
			//start looping from each character 
				current_array_string_index = 0;
			// copy each char from the current string

			while (strs[i][current_array_string_index] != '\0')
			{
				joined_str[final_string_index] = strs[i][current_array_string_index];
				current_array_string_index++; // process next char of current string
				final_string_index++; // process next char of joined_str
			}

			// only add separators if the current string isn't the last one from the
			// array
			// if there are 3 strings, the last string is the one at strs[2]
			if (i < size - 1)
			{
				sep_index = 0;
				while (sep[sep_index] != '\0')
				{
					joined_str[final_string_index] = sep[sep_index];
					sep_index++; // process next char of separator
					final_string_index++; // process next char of joined_str
				}
			}
			i++; // process the next string
		}
	joined_str[final_string_index] = '\0';
}/
                                                                                                                                                                                                                                                                                                            i

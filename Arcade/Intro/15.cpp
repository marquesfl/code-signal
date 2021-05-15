std::vector<std::string> put_border(std::vector<string> a, char c) {
  // Put * at init and last string inside a."
  for(auto& s: a) {
    s.insert(0, std::string(1, c));
    s.push_back(c);
  }
  return a;
}

std::vector<std::string> put_sup_border(std::vector<std::string> a, char c) {
  // Put *'s as first and lasr line inside a, consider a as matrix of
  // chars.
  std::string insert_str(a[0].size(), c);
  a.insert(a.begin(), insert_str);
  a.push_back(insert_str);
  return a;
}
  

std::vector<std::string> addBorder(std::vector<std::string> picture) {
  // Given a rectangular matrix of characters, add a border of
  // asterisks(*) to it.
  const char c = '*';
  return put_sup_border(put_border(picture, c), c);
}

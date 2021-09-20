var hack_object = {
  hack_property: "Hackerearth",
  hack_method: function (h1, h2) {
    console.log(h1, this.hack_property + h2);
  },
};

hack_object.hack_method("<", ">");

var hack_object2 = {
  hack_property: "Hack",
};

hack_object.hack_method.call(hack_object2, "<", ">");
hack_object.hack_method.apply(hack_object2, ["<", ">"]);

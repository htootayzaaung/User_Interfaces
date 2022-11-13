int result_count = 0;
int move_right = r.x() + 6;
int move_down = r.y() + 60;
int move_down2 = (r.width() * 0.15) + 30;



else if (label->text() == kSearchResult && r.width() < 500)
{
  result_count = result_count + 1;
  if (result_count == 1)
  {
    label->setGeometry(r.x() + 6, r.y() + 60, (r.width() * 0.15) + 10 , (r.height() * 0.15) + 35);
  }
  else if (result_count > 1)
  {
    move_right = move_right + r.width() * 0.15 + 20;

    if (move_right + r.width() * 0.15 + 10 > r.width())
    {
      move_down = move_down + r.height() * 0.15 + 40; //+ 20
      move_right = r.x() + 6;

      if (move_down + r.height() * 0.15 + 10 < r.height() - 160) //-40      //play around this negative "-" value
      {
        label->setGeometry(move_right, move_down, (r.width() * 0.15) + 10, (r.height() * 0.15) + 35);
      }
      else
      {
        label->setGeometry(move_right, move_down, 0, 0);
      }
    }
    else
    {
      if (move_down + r.height() * 0.15 + 10 > r.height() - 160) //-4
      {
        label->setGeometry(move_right, move_down, 0, 0);
      }
      else
      {
        label->setGeometry(move_right, move_down, (r.width() * 0.15) + 10, (r.height() * 0.15) + 35);
      }
    }
  }
}

<li class="child"> <a href="{dede:field name='typeurl'/}">
      <p class="title">{dede:field name='typename'/}</p>
      </a>
      <ul class="childContent">
        {dede:channel type='son' noself='yes'} <a href="[field:typeurl/]">
        <li class="childContentLi">[field:typename/]</li>
        </a> {/dede:channel}
      </ul>
      <img class="wapNavPointer" src="/skin/images/wapnavpointer.jpg" /> </li>
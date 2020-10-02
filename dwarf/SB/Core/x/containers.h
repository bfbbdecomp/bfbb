



void clear(tier_queue_allocator* this);
uint32 log2_ceil(uint32 v);
void free_block(tier_queue_allocator* this, uint8 index);
uint32 get_block(tier_queue* this, uint32 i);
uint32 mod_block_size(tier_queue_allocator* this, uint32 i);
uint32 wrap_index(tier_queue* this, uint32 i);
void clear(tier_queue* this);
uint8 __ne(iterator* this, iterator& c);
iterator& __pp(iterator* this);
missle_record_data* __rf(iterator* this);
iterator end(fixed_queue* this);
iterator begin(fixed_queue* this);

// clear__20tier_queue_allocatorFv
// Start address: 0x1e4ea0
void clear(tier_queue_allocator* this)
{
	uint32 imask;
	uint32 i;
	uint32 end;
}

// log2_ceil__20tier_queue_allocatorCFUi
// Start address: 0x1e5050
uint32 log2_ceil(uint32 v)
{
	uint32 power;
}

// free_block__20tier_queue_allocatorFUc
// Start address: 0x1e6700
void free_block(tier_queue_allocator* this, uint8 index)
{
	block_data& block;
}

// get_block__36tier_queue<Q29xFXRibbon10joint_data>CFUi
// Start address: 0x1e6760
uint32 get_block(tier_queue* this, uint32 i)
{
}

// mod_block_size__20tier_queue_allocatorCFUi
// Start address: 0x1e6770
uint32 mod_block_size(tier_queue_allocator* this, uint32 i)
{
}

// wrap_index__36tier_queue<Q29xFXRibbon10joint_data>CFUi
// Start address: 0x1e6780
uint32 wrap_index(tier_queue* this, uint32 i)
{
}

// clear__36tier_queue<Q29xFXRibbon10joint_data>Fv
// Start address: 0x1e6790
void clear(tier_queue* this)
{
	uint32 i;
	uint32 end;
}

// __ne__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFRCQ286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iterator
// Start address: 0x2a8250
uint8 __ne(iterator* this, iterator& c)
{
}

// __pp__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorFv
// Start address: 0x2a8270
iterator& __pp(iterator* this)
{
}

// __rf__Q286fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>8iteratorCFv
// Start address: 0x2a8290
missle_record_data* __rf(iterator* this)
{
}

// end__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv
// Start address: 0x2a82b0
iterator end(fixed_queue* this)
{
}

// begin__86fixed_queue<Q313cruise_bubble30@unnamed@zEntCruiseBubble_cpp@18missle_record_data,127>CFv
// Start address: 0x2a82e0
iterator begin(fixed_queue* this)
{
}


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppSupport/AppSupport-Structs.h>
@interface CPMemoryPoolFile : NSObject {

	opaque_pthread_mutex_t _mutex;
	int _fd;
	char* _slots;
	unsigned long long _slotCount;
	unsigned long long _slotLength;
	CFBitVectorRef _usedSlots;
	CFAllocatorRef _deallocator;

}
-(void)dealloc;
-(id)initWithLabel:(const char*)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3 ;
-(id)nextSlotWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)returnSlot:(void*)arg1 ;
@end


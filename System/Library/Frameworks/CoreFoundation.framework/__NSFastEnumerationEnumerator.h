/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@protocol NSFastEnumeration;
@interface __NSFastEnumerationEnumerator : NSEnumerator {

	id<NSFastEnumeration> _obj;
	id _origObj;
	unsigned long long _index;
	unsigned long long _count;
	unsigned long long _mut;
	id _objects[16];
	SCD_Struct_NS19* _state;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(id)nextObject;
@end


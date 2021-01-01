/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSData, NSDictionary;

@interface CMFallStatsItemsIterator : NSObject <NSFastEnumeration> {

	NSData* _data;
	NSDictionary* _item;
	Reader* fMslReader;
	MemoryDelegate* fMslReaderDelegate;

}
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CM3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ;
@end


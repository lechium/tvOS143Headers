/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIFoundation/UIFoundation-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned long long hashMask;
	unsigned long long count;

}
-(void)dealloc;
-(long long)count;
-(BOOL)lookupKey:(id)arg1 identifier:(long long*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned long long)arg2 ;
@end


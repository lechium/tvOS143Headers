/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject {

	NSDictionary* _backingDictionary;
	NSMutableArray* _keyIndices;

}
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)reconcileKey:(id)arg1 matchedIndex:(unsigned*)arg2 sequence:(unsigned char*)arg3 error:(unsigned char*)arg4 ;
@end


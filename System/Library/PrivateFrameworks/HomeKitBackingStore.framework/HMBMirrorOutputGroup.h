/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMBProcessingOptions;

@interface HMBMirrorOutputGroup : HMFObject {

	HMBProcessingOptions* _options;
	unsigned long long _blockRow;

}

@property (nonatomic,readonly) unsigned long long blockRow;                 //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) HMBProcessingOptions * options;              //@synthesize options=_options - In the implementation block
-(id)description;
-(HMBProcessingOptions *)options;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2 ;
@end

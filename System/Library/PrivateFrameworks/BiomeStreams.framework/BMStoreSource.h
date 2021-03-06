/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMSource.h>

@class BMStreamDatastoreWriter;

@interface BMStoreSource : BMSource {

	BMStreamDatastoreWriter* _writer;

}
-(void)sendEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(void)sendEvent:(id)arg1 timestamp:(double)arg2 ;
@end


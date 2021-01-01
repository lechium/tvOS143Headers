/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BMSourceStream.h>
#import <libobjc.A.dylib/BMStream.h>

@class NSString, BMStoreConfig, BMStoreSource, BMStoreValidator, BMStreamsAccessClient;

@interface BMStoreStream : NSObject <BMSourceStream, BMStream> {

	NSString* _streamIdentifier;
	BMStoreConfig* _storeConfig;
	BMStoreSource* _source;
	BMStoreValidator* _validator;
	BOOL _isPublic;
	BMStreamsAccessClient* _accessClient;

}

@property (nonatomic,readonly) NSString * identifier; 
-(id)init;
-(NSString *)identifier;
-(id)source;
-(id)publisher;
-(id)_publisher;
-(id)validator;
-(id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2 ;
-(id)publisherFromStartTime:(double)arg1 ;
-(void)pruneWithPredicateBlock:(/*^block*/id)arg1 ;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 isPublic:(BOOL)arg3 ;
@end


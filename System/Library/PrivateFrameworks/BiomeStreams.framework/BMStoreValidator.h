/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, BPSBiomeStorePublisher;

@interface BMStoreValidator : NSObject {

	NSString* _identifier;
	BPSBiomeStorePublisher* _publisher;

}
-(id)init;
-(id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 ;
-(int)isChronologicallyValidWithPublisher:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 ;
-(int)isChronologicallyValidFromBookmark:(id)arg1 shouldContinue:(/*^block*/id)arg2 ;
-(int)isChronologicallyValidFromTimestamp:(double)arg1 shouldContinue:(/*^block*/id)arg2 ;
@end

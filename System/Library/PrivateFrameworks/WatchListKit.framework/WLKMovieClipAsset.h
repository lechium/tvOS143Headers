/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WLKMovieClipAsset : NSObject {

	unsigned long long _duration;
	NSString* _flavor;
	NSString* _url;

}

@property (nonatomic,readonly) unsigned long long duration;                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationString; 
@property (nonatomic,copy,readonly) NSString * flavor;                      //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                         //@synthesize url=_url - In the implementation block
+(id)movieClipAssetsWithArray:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
-(NSString *)url;
-(unsigned long long)duration;
-(NSString *)flavor;
-(NSString *)durationString;
@end

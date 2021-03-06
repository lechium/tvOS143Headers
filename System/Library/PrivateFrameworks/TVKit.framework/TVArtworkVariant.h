/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVKit/TVKit-Structs.h>
@class NSURL;

@interface TVArtworkVariant : NSObject {

	NSURL* _artworkURL;
	long long _artworkType;
	CGSize _artworkSize;

}

@property (nonatomic,copy,readonly) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize;                   //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,readonly) long long artworkType;                //@synthesize artworkType=_artworkType - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)artworkURL;
-(long long)artworkType;
-(CGSize)artworkSize;
@end


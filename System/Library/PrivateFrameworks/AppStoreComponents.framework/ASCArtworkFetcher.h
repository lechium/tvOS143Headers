/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppStoreComponents/AppStoreComponents-Structs.h>
@class NSURLSession, ASCTaskCoordinator;

@interface ASCArtworkFetcher : NSObject {

	NSURLSession* _urlSession;
	double _scale;
	ASCTaskCoordinator* _fetchCoordinator;

}

@property (nonatomic,readonly) NSURLSession * urlSession;                          //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) ASCTaskCoordinator * fetchCoordinator;              //@synthesize fetchCoordinator=_fetchCoordinator - In the implementation block
+(id)sharedFetcher;
-(id)dataWithContentsOfURL:(id)arg1 ;
-(double)scale;
-(id)imageWithContentsOfURL:(id)arg1 ;
-(NSURLSession *)urlSession;
-(id)imageForContentsOfArtwork:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithURLSession:(id)arg1 scale:(double)arg2 ;
-(id)URLWithContentsOfArtwork:(id)arg1 preferredSize:(CGSize)arg2 ;
-(ASCTaskCoordinator *)fetchCoordinator;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSBundleResourceRequest;

@interface GKDashboardAssetController : NSObject {

	int _leaderboardLoadCount;
	NSDictionary* _dashboardAssetNames;
	NSDictionary* _leaderboardSetAssetNames;
	NSDictionary* _leaderboardAssetNames;
	NSDictionary* _dashboardAssetTags;
	NSDictionary* _leaderboardSetAssetTags;
	NSDictionary* _leaderboardAssetTags;
	NSBundleResourceRequest* _dashboardImageRequest;
	NSBundleResourceRequest* _leaderboardSetImageRequest;
	NSBundleResourceRequest* _leaderboardImageRequest;

}

@property (nonatomic,retain) NSDictionary * dashboardAssetTags;                                 //@synthesize dashboardAssetTags=_dashboardAssetTags - In the implementation block
@property (nonatomic,retain) NSDictionary * dashboardAssetNames;                                //@synthesize dashboardAssetNames=_dashboardAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetTags;                            //@synthesize leaderboardSetAssetTags=_leaderboardSetAssetTags - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardSetAssetNames;                           //@synthesize leaderboardSetAssetNames=_leaderboardSetAssetNames - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetTags;                               //@synthesize leaderboardAssetTags=_leaderboardAssetTags - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardAssetNames;                              //@synthesize leaderboardAssetNames=_leaderboardAssetNames - In the implementation block
@property (nonatomic,retain) NSBundleResourceRequest * dashboardImageRequest;                   //@synthesize dashboardImageRequest=_dashboardImageRequest - In the implementation block
@property (nonatomic,retain) NSBundleResourceRequest * leaderboardSetImageRequest;              //@synthesize leaderboardSetImageRequest=_leaderboardSetImageRequest - In the implementation block
@property (nonatomic,retain) NSBundleResourceRequest * leaderboardImageRequest;                 //@synthesize leaderboardImageRequest=_leaderboardImageRequest - In the implementation block
@property (assign,nonatomic) int leaderboardLoadCount;                                          //@synthesize leaderboardLoadCount=_leaderboardLoadCount - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setDashboardAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardSetAssetNames:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetNames:(NSDictionary *)arg1 ;
-(NSDictionary *)dashboardAssetNames;
-(NSDictionary *)leaderboardSetAssetNames;
-(NSDictionary *)leaderboardAssetNames;
-(void)loadDashboardLogoImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLeaderboardSetImagesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLeaderboardImagesForSetWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateAssetDictionaries;
-(void)setDashboardAssetTags:(NSDictionary *)arg1 ;
-(void)setLeaderboardSetAssetTags:(NSDictionary *)arg1 ;
-(void)setLeaderboardAssetTags:(NSDictionary *)arg1 ;
-(void)setDashboardImageRequest:(NSBundleResourceRequest *)arg1 ;
-(void)_loadImagesForLeaderboardSets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLeaderboardSetImageRequest:(NSBundleResourceRequest *)arg1 ;
-(void)_loadImagesForLeaderboards:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setLeaderboardImageRequest:(NSBundleResourceRequest *)arg1 ;
-(NSDictionary *)dashboardAssetTags;
-(NSDictionary *)leaderboardSetAssetTags;
-(NSDictionary *)leaderboardAssetTags;
-(NSBundleResourceRequest *)dashboardImageRequest;
-(NSBundleResourceRequest *)leaderboardSetImageRequest;
-(NSBundleResourceRequest *)leaderboardImageRequest;
-(int)leaderboardLoadCount;
-(void)setLeaderboardLoadCount:(int)arg1 ;
@end

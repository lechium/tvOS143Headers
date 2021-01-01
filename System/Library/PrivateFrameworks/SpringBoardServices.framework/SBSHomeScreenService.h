/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBSHomeScreenServiceServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class BSServiceConnection, NSObject, NSArray;

@interface SBSHomeScreenService : NSObject <SBSHomeScreenServiceServerToClientInterface> {

	BSServiceConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (assign,getter=isLowDensityIconLayoutEnabled,nonatomic) BOOL lowDensityIconLayoutEnabled; 
@property (assign,nonatomic) BOOL addsNewIconsToHomeScreen; 
@property (assign,nonatomic) BOOL showsBadgesInAppLibrary; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
-(id)init;
-(void)dealloc;
-(void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1 ;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1 ;
-(void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1 ;
-(BOOL)debugContinuityWithBadgeType:(id)arg1 ;
-(void)runDownloadingIconTest;
-(void)runRemoveAndRestoreIconTest;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(void)configureDeweyOneCategoryWithAllApps;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(unsigned long long)arg1 ;
-(void)organizeAllIconsAcrossPagesWithPageCount:(unsigned long long)arg1 ;
-(void)ignoreAllApps;
-(void)removeAllWidgets;
-(void)changeDisplayedDateOverride:(id)arg1 ;
-(void)changeDisplayedDateOffsetOverride:(double)arg1 ;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)reloadIcons;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(BOOL)isLowDensityIconLayoutEnabled;
-(void)setLowDensityIconLayoutEnabled:(BOOL)arg1 ;
-(BOOL)addsNewIconsToHomeScreen;
-(void)setAddsNewIconsToHomeScreen:(BOOL)arg1 ;
-(BOOL)showsBadgesInAppLibrary;
-(void)setShowsBadgesInAppLibrary:(BOOL)arg1 ;
-(void)requestAppLibraryUpdateWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestAppLibraryUpdateSuggestionsAndRecentsPodWithReason:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end


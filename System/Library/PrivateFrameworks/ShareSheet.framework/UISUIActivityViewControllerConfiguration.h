/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/ShareSheet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UISUISecurityContext, UIColor, NSString, UITraitCollection, NSLocale;

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL _allowsEmbedding;
	BOOL _isContentManaged;
	BOOL _shouldMatchOnlyUserElectedExtensions;
	BOOL _shouldExcludeiCloudAddToDriveActivity;
	BOOL _shouldExcludeiCloudSharingActivity;
	BOOL _shouldSkipPeopleSuggestions;
	BOOL _canExcludeExtensionActivities;
	BOOL _canShowShareSheetPlugIns;
	BOOL _whitelistActionActivitiesOnly;
	BOOL _linkedBeforeYukon;
	BOOL _canSaveImages;
	BOOL __unitTest_disableExcludingSourceApplicationFromOpenActivities;
	double _preferredWidth;
	NSArray* _hostActivityConfigurations;
	NSArray* _activityItemValueClassNames;
	NSArray* _activityTypesToCreateInShareService;
	UISUISecurityContext* _securityScopedURLsForMatching;
	NSArray* _activityItemValueExtensionMatchingDictionaries;
	NSArray* _urlsBeingShared;
	NSArray* _linkPresentationDataForActivityItems;
	NSArray* _typeIdentifiersForShortcutsMatching;
	UIColor* _hostTintColor;
	NSArray* _initialPhotosAssetDetails;
	NSString* _sessionID;
	UITraitCollection* _hostTraitCollection;
	NSLocale* _hostLocale;
	NSArray* _preferredLocalizations;
	NSArray* _includedActivityTypes;
	NSArray* _excludedActivityTypes;
	NSArray* _activityTypeOrder;
	long long _excludedActivityCategories;
	long long _sharingStyle;
	NSDirectionalEdgeInsets _hostLayoutMargins;

}

@property (assign,nonatomic) double preferredWidth;                                                             //@synthesize preferredWidth=_preferredWidth - In the implementation block
@property (nonatomic,retain) NSArray * hostActivityConfigurations;                                              //@synthesize hostActivityConfigurations=_hostActivityConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueClassNames;                                             //@synthesize activityItemValueClassNames=_activityItemValueClassNames - In the implementation block
@property (nonatomic,retain) NSArray * activityTypesToCreateInShareService;                                     //@synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService - In the implementation block
@property (nonatomic,retain) UISUISecurityContext * securityScopedURLsForMatching;                              //@synthesize securityScopedURLsForMatching=_securityScopedURLsForMatching - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;                          //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
@property (nonatomic,retain) NSArray * urlsBeingShared;                                                         //@synthesize urlsBeingShared=_urlsBeingShared - In the implementation block
@property (nonatomic,retain) NSArray * linkPresentationDataForActivityItems;                                    //@synthesize linkPresentationDataForActivityItems=_linkPresentationDataForActivityItems - In the implementation block
@property (nonatomic,retain) NSArray * typeIdentifiersForShortcutsMatching;                                     //@synthesize typeIdentifiersForShortcutsMatching=_typeIdentifiersForShortcutsMatching - In the implementation block
@property (nonatomic,retain) UIColor * hostTintColor;                                                           //@synthesize hostTintColor=_hostTintColor - In the implementation block
@property (nonatomic,retain) NSArray * initialPhotosAssetDetails;                                               //@synthesize initialPhotosAssetDetails=_initialPhotosAssetDetails - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                                              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) UITraitCollection * hostTraitCollection;                                           //@synthesize hostTraitCollection=_hostTraitCollection - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hostLayoutMargins;                                         //@synthesize hostLayoutMargins=_hostLayoutMargins - In the implementation block
@property (nonatomic,retain) NSLocale * hostLocale;                                                             //@synthesize hostLocale=_hostLocale - In the implementation block
@property (nonatomic,retain) NSArray * preferredLocalizations;                                                  //@synthesize preferredLocalizations=_preferredLocalizations - In the implementation block
@property (assign,nonatomic) BOOL allowsEmbedding;                                                              //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (assign,nonatomic) BOOL isContentManaged;                                                             //@synthesize isContentManaged=_isContentManaged - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;                                         //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity;                                        //@synthesize shouldExcludeiCloudAddToDriveActivity=_shouldExcludeiCloudAddToDriveActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudSharingActivity;                                           //@synthesize shouldExcludeiCloudSharingActivity=_shouldExcludeiCloudSharingActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPeopleSuggestions;                                                  //@synthesize shouldSkipPeopleSuggestions=_shouldSkipPeopleSuggestions - In the implementation block
@property (assign,nonatomic) BOOL canExcludeExtensionActivities;                                                //@synthesize canExcludeExtensionActivities=_canExcludeExtensionActivities - In the implementation block
@property (assign,nonatomic) BOOL canShowShareSheetPlugIns;                                                     //@synthesize canShowShareSheetPlugIns=_canShowShareSheetPlugIns - In the implementation block
@property (assign,nonatomic) BOOL whitelistActionActivitiesOnly;                                                //@synthesize whitelistActionActivitiesOnly=_whitelistActionActivitiesOnly - In the implementation block
@property (assign,nonatomic) BOOL linkedBeforeYukon;                                                            //@synthesize linkedBeforeYukon=_linkedBeforeYukon - In the implementation block
@property (assign,nonatomic) BOOL canSaveImages;                                                                //@synthesize canSaveImages=_canSaveImages - In the implementation block
@property (nonatomic,retain) NSArray * includedActivityTypes;                                                   //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * excludedActivityTypes;                                                   //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * activityTypeOrder;                                                       //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                              //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (assign,nonatomic) long long sharingStyle;                                                            //@synthesize sharingStyle=_sharingStyle - In the implementation block
@property (nonatomic,readonly) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities;              //@synthesize _unitTest_disableExcludingSourceApplicationFromOpenActivities=__unitTest_disableExcludingSourceApplicationFromOpenActivities - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSArray *)preferredLocalizations;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setWhitelistActionActivitiesOnly:(BOOL)arg1 ;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(void)setSharingStyle:(long long)arg1 ;
-(NSArray *)urlsBeingShared;
-(void)setUrlsBeingShared:(NSArray *)arg1 ;
-(void)setIsContentManaged:(BOOL)arg1 ;
-(BOOL)isContentManaged;
-(void)setPreferredLocalizations:(NSArray *)arg1 ;
-(void)setShouldMatchOnlyUserElectedExtensions:(BOOL)arg1 ;
-(long long)sharingStyle;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(void)setShouldSkipPeopleSuggestions:(BOOL)arg1 ;
-(BOOL)shouldMatchOnlyUserElectedExtensions;
-(BOOL)whitelistActionActivitiesOnly;
-(NSArray *)activityTypeOrder;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(NSArray *)includedActivityTypes;
-(NSArray *)excludedActivityTypes;
-(long long)excludedActivityCategories;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(BOOL)allowsEmbedding;
-(void)setHostTintColor:(UIColor *)arg1 ;
-(void)setHostActivityConfigurations:(NSArray *)arg1 ;
-(void)setActivityItemValueClassNames:(NSArray *)arg1 ;
-(NSArray *)activityTypesToCreateInShareService;
-(void)setActivityTypesToCreateInShareService:(NSArray *)arg1 ;
-(void)setSecurityScopedURLsForMatching:(UISUISecurityContext *)arg1 ;
-(void)setHostTraitCollection:(UITraitCollection *)arg1 ;
-(void)setHostLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setHostLocale:(NSLocale *)arg1 ;
-(void)setPreferredWidth:(double)arg1 ;
-(void)setAllowsEmbedding:(BOOL)arg1 ;
-(void)setLinkedBeforeYukon:(BOOL)arg1 ;
-(BOOL)shouldSkipPeopleSuggestions;
-(void)setShouldExcludeiCloudAddToDriveActivity:(BOOL)arg1 ;
-(BOOL)shouldExcludeiCloudAddToDriveActivity;
-(void)setShouldExcludeiCloudSharingActivity:(BOOL)arg1 ;
-(void)setCanExcludeExtensionActivities:(BOOL)arg1 ;
-(void)setCanShowShareSheetPlugIns:(BOOL)arg1 ;
-(void)setInitialPhotosAssetDetails:(NSArray *)arg1 ;
-(void)setCanSaveImages:(BOOL)arg1 ;
-(double)preferredWidth;
-(NSArray *)hostActivityConfigurations;
-(NSArray *)activityItemValueClassNames;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(UISUISecurityContext *)securityScopedURLsForMatching;
-(BOOL)shouldExcludeiCloudSharingActivity;
-(BOOL)canExcludeExtensionActivities;
-(BOOL)canShowShareSheetPlugIns;
-(BOOL)linkedBeforeYukon;
-(BOOL)canSaveImages;
-(BOOL)_unitTest_disableExcludingSourceApplicationFromOpenActivities;
-(NSArray *)linkPresentationDataForActivityItems;
-(void)setLinkPresentationDataForActivityItems:(NSArray *)arg1 ;
-(UIColor *)hostTintColor;
-(NSArray *)initialPhotosAssetDetails;
-(UITraitCollection *)hostTraitCollection;
-(NSLocale *)hostLocale;
-(NSDirectionalEdgeInsets)hostLayoutMargins;
-(NSArray *)typeIdentifiersForShortcutsMatching;
-(void)setTypeIdentifiersForShortcutsMatching:(NSArray *)arg1 ;
-(id)availableActivityItemValueClasses;
-(id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3 ;
-(id)contextForMatchingByActivityItemValueClasses;
-(id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMediaTypeAggregating.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXCMMMutableViewModel.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, PXSectionedSelectionManager, NSArray, NSURL, NSDate, NSSet, PXRecipient, PXPhotosGlobalFooterViewModel;

@interface PXCMMViewModel : PXObservable <PXMediaTypeAggregating, PXChangeObserver, PXCMMMutableViewModel> {

	BOOL _selecting;
	BOOL _selectionEnabled;
	BOOL _shouldShowPlaceholder;
	BOOL _containsUnverifiedPersons;
	BOOL _loadingPeopleSuggestions;
	NSString* _originalTitle;
	NSString* _title;
	NSString* _subtitle;
	PXSectionedSelectionManager* _selectionManager;
	NSArray* _recipients;
	NSURL* _shareURL;
	NSString* _shareUUID;
	PXRecipient* _originatorRecipient;
	unsigned long long _numberOfReceivedAssets;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _photosCount;
	long long _videosCount;
	long long _totalCount;
	long long _selectedPhotosCount;
	long long _selectedVideosCount;
	long long _selectedCount;
	NSSet* _disabledActionTypes;
	PXPhotosGlobalFooterViewModel* _footerViewModel;

}

@property (nonatomic,readonly) long long aggregateMediaTypeForSelection; 
@property (nonatomic,readonly) long long aggregateMediaType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * originalTitle;                                                //@synthesize originalTitle=_originalTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;                               //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                                                    //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSURL * shareURL;                                                        //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * shareUUID;                                                    //@synthesize shareUUID=_shareUUID - In the implementation block
@property (getter=isSelecting,nonatomic,readonly) BOOL selecting;                                            //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,readonly) BOOL selectionEnabled;                                                        //@synthesize selectionEnabled=_selectionEnabled - In the implementation block
@property (nonatomic,copy,readonly) PXRecipient * originatorRecipient;                                       //@synthesize originatorRecipient=_originatorRecipient - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfReceivedAssets;                                    //@synthesize numberOfReceivedAssets=_numberOfReceivedAssets - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                                               //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;                                    //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) long long photosCount;                                                        //@synthesize photosCount=_photosCount - In the implementation block
@property (nonatomic,readonly) long long videosCount;                                                        //@synthesize videosCount=_videosCount - In the implementation block
@property (nonatomic,readonly) long long totalCount;                                                         //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,readonly) long long selectedPhotosCount;                                                //@synthesize selectedPhotosCount=_selectedPhotosCount - In the implementation block
@property (nonatomic,readonly) long long selectedVideosCount;                                                //@synthesize selectedVideosCount=_selectedVideosCount - In the implementation block
@property (nonatomic,readonly) long long selectedCount;                                                      //@synthesize selectedCount=_selectedCount - In the implementation block
@property (nonatomic,readonly) NSSet * disabledActionTypes;                                                  //@synthesize disabledActionTypes=_disabledActionTypes - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPlaceholder;                                                   //@synthesize shouldShowPlaceholder=_shouldShowPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons;                                               //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (nonatomic,readonly) PXPhotosGlobalFooterViewModel * footerViewModel;                              //@synthesize footerViewModel=_footerViewModel - In the implementation block
@property (getter=isLoadingPeopleSuggestions,nonatomic,readonly) BOOL loadingPeopleSuggestions;              //@synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions - In the implementation block
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setPhotosCount:(long long)arg1 ;
-(long long)photosCount;
-(long long)totalCount;
-(NSURL *)shareURL;
-(long long)videosCount;
-(void)setVideosCount:(long long)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(BOOL)containsUnverifiedPersons;
-(PXSectionedSelectionManager *)selectionManager;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)mutableChangeObject;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)isSelecting;
-(void)setSelecting:(BOOL)arg1 ;
-(void)setLoadingPeopleSuggestions:(BOOL)arg1 ;
-(void)setContainsUnverifiedPersons:(BOOL)arg1 ;
-(BOOL)isLoadingPeopleSuggestions;
-(void)setPosterAsset:(id)arg1 posterMediaProvider:(id)arg2 ;
-(NSString *)originalTitle;
-(void)setOriginalTitle:(NSString *)arg1 ;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(NSString *)shareUUID;
-(void)setShareUUID:(NSString *)arg1 ;
-(void)setTotalCount:(long long)arg1 ;
-(long long)selectedPhotosCount;
-(void)setSelectedPhotosCount:(long long)arg1 ;
-(long long)selectedVideosCount;
-(void)setSelectedVideosCount:(long long)arg1 ;
-(long long)selectedCount;
-(void)setSelectedCount:(long long)arg1 ;
-(BOOL)selectionEnabled;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(NSSet *)arg1 ;
-(BOOL)shouldShowPlaceholder;
-(void)setShouldShowPlaceholder:(BOOL)arg1 ;
-(PXRecipient *)originatorRecipient;
-(void)setOriginatorRecipient:(PXRecipient *)arg1 ;
-(unsigned long long)numberOfReceivedAssets;
-(void)setNumberOfReceivedAssets:(unsigned long long)arg1 ;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(PXPhotosGlobalFooterViewModel *)footerViewModel;
-(long long)aggregateMediaType;
-(long long)aggregateMediaTypeForSelection;
@end


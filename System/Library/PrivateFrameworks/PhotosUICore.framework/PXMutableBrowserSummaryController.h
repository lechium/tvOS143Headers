/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol PXMutableBrowserSummaryController <NSObject>
@property (assign,nonatomic) BOOL shouldUseSubtitles; 
@property (assign,nonatomic) BOOL shouldUseNavigationTitle; 
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates; 
@property (assign,nonatomic) BOOL shouldShowLocationNames; 
@property (assign,nonatomic) unsigned long long containerDateFormatGranularity; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (nonatomic,copy) NSDictionary * emphasizedAttributes; 
@property (nonatomic,copy) NSDictionary * selectionAttributes; 
@required
-(NSDictionary *)defaultAttributes;
-(NSDictionary *)emphasizedAttributes;
-(void)invalidateContainerTitle;
-(void)invalidateLocalizedContainerItemsCount;
-(void)invalidateContainerDateInterval;
-(void)invalidateVisibleContent;
-(void)invalidateSelection;
-(void)invalidateFilteringContainerContent;
-(BOOL)shouldUseSubtitles;
-(void)setShouldUseSubtitles:(BOOL)arg1;
-(BOOL)shouldUseNavigationTitle;
-(void)setShouldUseNavigationTitle:(BOOL)arg1;
-(BOOL)shouldUseAbbreviatedDates;
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1;
-(BOOL)shouldShowLocationNames;
-(void)setShouldShowLocationNames:(BOOL)arg1;
-(unsigned long long)containerDateFormatGranularity;
-(void)setContainerDateFormatGranularity:(unsigned long long)arg1;
-(void)setDefaultAttributes:(id)arg1;
-(void)setEmphasizedAttributes:(id)arg1;
-(NSDictionary *)selectionAttributes;
-(void)setSelectionAttributes:(id)arg1;

@end


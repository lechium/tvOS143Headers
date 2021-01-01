/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol UITable_RowDataSource <UITable>
@property (getter=_constants,nonatomic,readonly) id<UITableConstants> constants; 
@property (getter=_headerFooterLeadingMarginWidth,nonatomic,readonly) double headerFooterLeadingMarginWidth; 
@property (getter=_headerFooterTrailingMarginWidth,nonatomic,readonly) double headerFooterTrailingMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) double defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) double defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) double sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_sectionHeaderPadding,nonatomic,readonly) double sectionHeaderPadding; 
@property (getter=_sectionFooterPadding,nonatomic,readonly) double sectionFooterPadding; 
@property (getter=_rowSpacing,nonatomic,readonly) double rowSpacing; 
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) BOOL isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) double heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) double heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) BOOL providesRowHeights; 
@property (getter=_estimatesHeights,nonatomic,readonly) BOOL estimatesHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) BOOL estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) BOOL estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) BOOL estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) BOOL shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) BOOL shouldUseNewHeaderFooterBehavior; 
@required
-(double)_heightForRowAtIndexPath:(id)arg1;
-(double)_heightForFooterInSection:(long long)arg1;
-(UIEdgeInsets)_contentInset;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(id)_constants;
-(double)_rowSpacing;
-(double)_defaultSectionHeaderHeight;
-(double)_defaultSectionFooterHeight;
-(BOOL)_estimatesRowHeights;
-(BOOL)_estimatesSectionHeaderHeights;
-(BOOL)_estimatesSectionFooterHeights;
-(double)_heightForTableHeader;
-(double)_heightForTableFooter;
-(double)_headerFooterLeadingMarginWidth;
-(double)_headerFooterTrailingMarginWidth;
-(UIEdgeInsets*)_tableContentInset;
-(double)_dataSourceHeightForRowAtIndexPath:(id)arg1;
-(double)_dataSourceHeightForHeaderInSection:(long long)arg1;
-(double)_dataSourceHeightForFooterInSection:(long long)arg1;
-(double)_heightForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForRowAtIndexPath:(id)arg1;
-(double)_estimatedHeightForHeaderInSection:(long long)arg1;
-(double)_estimatedHeightForFooterInSection:(long long)arg1;
-(void)_prepareForRowDataHeaderFooterSizing;
-(void)_coalesceContentSizeUpdateWithDelta:(double)arg1;
-(void)_applyContentSizeDeltaImmediately:(double)arg1;
-(id)_titleForHeaderInSection:(long long)arg1;
-(id)_titleForFooterInSection:(long long)arg1;
-(id)_detailTextForHeaderInSection:(long long)arg1;
-(long long)_titleAlignmentForHeaderInSection:(long long)arg1;
-(long long)_titleAlignmentForFooterInSection:(long long)arg1;
-(double)_maxTitleWidthForHeaderInSection:(long long)arg1;
-(double)_maxTitleWidthForFooterInSection:(long long)arg1;
-(BOOL)_shouldStripHeaderTopPaddingForSection:(long long)arg1;
-(void)_setHeight:(double)arg1 forRowAtIndexPath:(id)arg2 usingPresentationValues:(BOOL)arg3;
-(double)_sidePadding;
-(double)_sectionHeaderPadding;
-(double)_sectionFooterPadding;
-(BOOL)_isTableHeaderAutohiding;
-(BOOL)_providesRowHeights;
-(BOOL)_estimatesHeights;
-(BOOL)_shouldUseSearchBarHeaderBehavior;
-(BOOL)_shouldUseNewHeaderFooterBehavior;

@end

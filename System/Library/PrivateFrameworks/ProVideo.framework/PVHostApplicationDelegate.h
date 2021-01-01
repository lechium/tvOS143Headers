/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVHostApplicationDelegate <NSObject>
@optional
-(id)effectTemplatesDirectoryName;
-(id)effectTemplatesBundle;
-(BOOL)wantsExtraLineSpacingForDiacritics;
-(BOOL)wantsDynamicLineSpacingForDiacritics;
-(BOOL)wantsToScaleEmojiToCapHeight;
-(BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
-(BOOL)wantsToUseBinarySearchForScalingToBothMargins;
-(BOOL)wantsToLimitLinesOfText;
-(unsigned)getNumberOfLinesToLimitTextTo;
-(BOOL)wantsToImproveQualityOfDraftQualityText;
-(BOOL)wantsToDownscaleGlyphsToOutputSize;
-(BOOL)wantsToSetTranscriptionsUsingArray;
-(BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
-(BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
-(BOOL)wantsToUseCachedTextureForText;
-(BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
-(BOOL)wantsToIncludeTrackingValueInAttributedString;
-(BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
-(BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
-(BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
-(BOOL)wantsToCacheTopLevelGroupRender;
-(unsigned)getMaxGlyphResolution;
-(id)preferredDisplayColorSpace;
-(id)preferredExportColorSpace;

@end

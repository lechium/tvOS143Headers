/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AXMPhotoVisionSupport : NSObject
+(void)_addNode:(id)arg1 toDescription:(id)arg2 atLevel:(long long)arg3 ;
+(id)leafNodeLabels;
+(id)nonLeafNodeLabels;
+(id)_collectLabelsIncludingLeafNodes:(BOOL)arg1 nonLeafNodes:(BOOL)arg2 ;
+(id)_blacklistedVoiceOverClassificationLabels;
+(BOOL)_validatePhotoVisionSoftLinkSymbols;
+(id)buildTaxonomyDescription;
+(id)buildParentChainDescriptionForAllNodes;
+(id)buildGraphStatisticsDescription;
+(id)processSceneClassifications:(id)arg1 withOptions:(unsigned)arg2 ;
+(id)localizedLabelForClassificationObservation:(id)arg1 ;
@end


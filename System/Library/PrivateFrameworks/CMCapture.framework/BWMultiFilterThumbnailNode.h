/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, BWColorLookupCache, FigColorCubeMetalFilter;

@interface BWMultiFilterThumbnailNode : BWNode {

	CGSize _thumbnailSize;
	NSArray* _filters;
	BWColorLookupCache* _colorLookupCache;
	FigColorCubeMetalFilter* _filter;
	opaqueCMFormatDescriptionRef _mostRecentFormatDescription;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)videoOutput;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(int)_loadAndConfigureFilterBundle;
-(id)initWithFilters:(id)arg1 thumbnailSize:(CGSize)arg2 ;
@end

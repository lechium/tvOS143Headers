/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDateComponentsFormatter, NSNumberFormatter;

@interface VUIMediaTagsViewHelper : NSObject {

	NSMutableDictionary* _tagsViewDictionary;
	NSDateComponentsFormatter* _dateComponentFormatter;
	NSNumberFormatter* _tomatoPercentFormatter;

}
-(id)initWithMediaItem:(id)arg1 ;
-(id)_releaseDateDescriptionFromDate:(id)arg1 ;
-(id)_durationDescriptionFromDuration:(id)arg1 ;
-(BOOL)_isValidNumber:(id)arg1 ;
-(id)_commonSenseString:(id)arg1 ;
-(void)addSeperatorKey:(id)arg1 ;
-(void)_mediaBagdesWithVUIMediaEntity:(id)arg1 ;
-(id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2 ;
-(id)initWithVUIMediaItem:(id)arg1 ;
-(id)initWithVUIMediaEntity:(id)arg1 ;
-(id)tagsViewDictionary;
@end


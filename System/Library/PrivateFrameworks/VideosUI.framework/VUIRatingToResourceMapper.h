/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface VUIRatingToResourceMapper : NSObject {

	NSDictionary* _mappingDictionary;

}

@property (nonatomic,retain) NSDictionary * mappingDictionary;              //@synthesize mappingDictionary=_mappingDictionary - In the implementation block
-(id)init;
-(id)_cleanRatingName:(id)arg1 ;
-(NSDictionary *)mappingDictionary;
-(id)resourceForRating:(id)arg1 ratingSystem:(id)arg2 ;
-(void)setMappingDictionary:(NSDictionary *)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIDocumentContextData.h>

@class NSString;

@interface VUIDocumentContextDataTVShow : VUIDocumentContextData {

	NSString* _showID;
	NSString* _episodeID;

}

@property (nonatomic,copy,readonly) NSString * showID;                 //@synthesize showID=_showID - In the implementation block
@property (nonatomic,copy,readonly) NSString * episodeID;              //@synthesize episodeID=_episodeID - In the implementation block
-(id)jsonData;
-(NSString *)showID;
-(id)initWithShowID:(id)arg1 episodeID:(id)arg2 ;
-(NSString *)episodeID;
@end


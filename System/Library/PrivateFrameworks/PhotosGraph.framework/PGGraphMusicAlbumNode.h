/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphMusicAlbumNode : PGGraphOptimizedNode {

	NSString* _title;

}

@property (nonatomic,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)description;
-(id)init;
-(unsigned short)domain;
-(NSString *)title;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
@end


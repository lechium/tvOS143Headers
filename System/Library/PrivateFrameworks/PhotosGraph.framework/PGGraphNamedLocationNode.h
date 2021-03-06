/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphLocationNode.h>

@class NSString;

@interface PGGraphNamedLocationNode : PGGraphLocationNode {

	NSString* _name;
	NSString* _uuid;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * UUID;              //@synthesize uuid=_uuid - In the implementation block
-(NSString *)name;
-(id)description;
-(unsigned short)domain;
-(void)setName:(NSString *)arg1 ;
-(NSString *)UUID;
-(id)initWithLabel:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
@end


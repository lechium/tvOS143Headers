/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSData;


@protocol MDLSkinDeformerComponent <MDLComponent>
@property (nonatomic,readonly) NSArray * jointPaths; 
@property (nonatomic,readonly) NSData * jointBindTransforms; 
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform; 
@required
-(unsigned long long)copyJointBindTransformsInto:(/*function pointer*/void**)arg1 maxCount:(unsigned long long)arg2;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;

@end


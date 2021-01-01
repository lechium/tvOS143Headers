/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLSkinDeformerComponent.h>

@class NSArray, NSData, NSString;

@interface MDLSkinDeformer : NSObject <NSCopying, MDLSkinDeformerComponent> {

	NSArray* _jointPaths;
	NSData* _jointBindTransforms;
	SCD_Struct_MD1 _meshBindTransform;

}

@property (nonatomic,readonly) NSArray * jointPaths;                          //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) NSData * jointBindTransforms;                  //@synthesize jointBindTransforms=_jointBindTransforms - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD1 meshBindTransform;              //@synthesize meshBindTransform=_meshBindTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJointPaths:(id)arg1 jointBindTransforms:(id)arg2 meshBindTransform:(SCD_Struct_MD1)arg3 ;
-(unsigned long long)copyJointBindTransformsInto:(SCD_Struct_MD1*)arg1 maxCount:(unsigned long long)arg2 ;
-(NSArray *)jointPaths;
-(NSData *)jointBindTransforms;
-(SCD_Struct_MD1)meshBindTransform;
-(id)initWithJointPaths:(id)arg1 jointBindTransforms:(const SCD_Struct_MD1*)arg2 count:(unsigned long long)arg3 meshBindTransform:(SCD_Struct_MD1)arg4 ;
@end


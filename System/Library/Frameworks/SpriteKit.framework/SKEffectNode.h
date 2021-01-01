/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/SKWarpable.h>

@class CIFilter, SKShader, NSDictionary, SKWarpGeometry, NSString;

@interface SKEffectNode : SKNode <SKWarpable> {

	SKCEffectNode* _skcEffectNode;

}

@property (nonatomic,retain) CIFilter * filter; 
@property (assign,nonatomic) BOOL shouldCenterFilter; 
@property (assign,nonatomic) BOOL shouldEnableEffects; 
@property (assign,nonatomic) BOOL shouldRasterize; 
@property (assign,nonatomic) long long blendMode; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (nonatomic,retain) SKWarpGeometry * warpGeometry; 
@property (assign,nonatomic) long long subdivisionLevels; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CIFilter *)filter;
-(void)setFilter:(CIFilter *)arg1 ;
-(BOOL)shouldRasterize;
-(void)setShouldRasterize:(BOOL)arg1 ;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setShouldEnableEffects:(BOOL)arg1 ;
-(void)setWarpGeometry:(SKWarpGeometry *)arg1 ;
-(SKWarpGeometry *)warpGeometry;
-(void)setShader:(SKShader *)arg1 ;
-(SKShader *)shader;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)setSubdivisionLevels:(long long)arg1 ;
-(long long)subdivisionLevels;
-(BOOL)shouldEnableEffects;
-(BOOL)shouldCenterFilter;
-(void)setShouldCenterFilter:(BOOL)arg1 ;
@end


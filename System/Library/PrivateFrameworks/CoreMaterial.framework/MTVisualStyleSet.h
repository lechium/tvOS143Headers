/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTVisualStyleSetProviding.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding> {

	NSMutableDictionary* _visualStylesToStyleNames;
	NSMutableDictionary* _styleNamesToVisualStylings;
	long long _visualStyleSetVersion;
	NSString* _visualStyleSetName;

}

@property (nonatomic,readonly) long long visualStyleSetVersion;                 //@synthesize visualStyleSetVersion=_visualStyleSetVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * visualStyleSetName;              //@synthesize visualStyleSetName=_visualStyleSetName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recipeNameForRecipeFromStyle:(id)arg1 fromStyleSetWithName:(id)arg2 ;
-(NSString *)description;
-(NSString *)visualStyleSetName;
-(id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3 ;
-(id)visualStylingForStyle:(id)arg1 ;
-(id)_materialDescriptionForStyle:(id)arg1 ;
-(long long)visualStyleSetVersion;
-(id)_newMaterialSettingsForStyle:(id)arg1 ;
@end


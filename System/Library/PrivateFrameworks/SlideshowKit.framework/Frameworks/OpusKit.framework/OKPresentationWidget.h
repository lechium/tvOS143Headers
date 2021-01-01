/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPresentationCanvas.h>

@class NSString, NSMutableDictionary, NSMutableArray;

@interface OKPresentationWidget : OKPresentationCanvas {

	NSString* _templateName;
	NSString* _internalName;
	NSString* _internalClassName;
	NSMutableDictionary* _internalSettings;
	NSMutableDictionary* _internalUserData;
	NSMutableArray* _internalSubWidgets;
	NSMutableArray* _internalMaterials;
	NSString* _className;
	NSMutableArray* _subWidgets;
	NSMutableArray* _materials;

}

@property (nonatomic,copy) NSString * templateName;                           //@synthesize templateName=_templateName - In the implementation block
@property (nonatomic,copy) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * subWidgets;              //@synthesize subWidgets=_subWidgets - In the implementation block
@property (nonatomic,copy) NSMutableArray * materials;                        //@synthesize materials=_materials - In the implementation block
+(id)widgetWithName:(id)arg1 templateName:(id)arg2 className:(id)arg3 settings:(id)arg4 userData:(id)arg5 subWidgets:(id)arg6 materials:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)templateName;
-(void)setTemplateName:(NSString *)arg1 ;
-(id)parentPage;
-(NSMutableArray *)materials;
-(void)setMaterials:(NSMutableArray *)arg1 ;
-(id)materialWithName:(id)arg1 ;
-(void)resolveIfNeeded;
-(id)canvasWithName:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 forPresentation:(id)arg2 andParent:(id)arg3 ;
-(id)subWidgetWithName:(id)arg1 ;
-(NSMutableArray *)subWidgets;
-(id)parentWidget;
-(id)widgetTemplate;
@end

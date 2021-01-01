/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityObjectWrapperBase : NSObject {

	AXCoreObject* m_axObject;
	unsigned long long _identifier;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)initWithAccessibilityObject:(AXCoreObject*)arg1 ;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(void)detach;
-(id)attachmentView;
-(AXCoreObject*)axBackingObject;
-(CGPathRef)convertPathToScreenSpace:(const Path=RetainPtr<CGPath *>=v}Variant<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WTF::Monostate, WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WTF::Monostate>=Monostatedummy_type)(__variant_data<WebCore::MoveData, WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WebCore::MoveData>=storage_wrapper<WebCore::MoveData>=type=[8C]}}dummy_type)(__variant_data<WebCore::LineData, WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WebCore::LineData>=storage_wrapper<WebCore::LineData>=type=[16C]}}dummy_type)(__variant_data<WebCore::ArcData, WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WebCore::ArcData>=storage_wrapper<WebCore::ArcData>=type=[32C]}}dummy_type)(__variant_data<WebCore::QuadCurveData, WebCore::BezierCurveData>=(__variant_data<WebCore::QuadCurveData>=storage_wrapper<WebCore::QuadCurveData>=type=[24C]}}dummy_type)(__variant_data<WebCore::BezierCurveData>=storage_wrapper<WebCore::BezierCurveData>=type=[32C]}}dummy_type))))))c}B}Ref)arg1 ;
-(id)baseAccessibilityDescription;
-(id)baseAccessibilityTitle;
-(id)ariaLandmarkRoleDescription;
-(id)baseAccessibilityHelpText;
-(CGRect)convertRectToSpace:(const FloatRect*)arg1 space:(int)arg2 ;
-(void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_accessibilityWebDocumentView;
-(id)baseAccessibilityResolvedEditingStyles;
-(void)baseAccessibilitySetFocus:(BOOL)arg1 ;
-(id)baseAccessibilitySpeechHint;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(void)attachAXObject:(AXCoreObject*)arg1 ;
-(AXCoreObject*)updateObjectBackingStore;
-(BOOL)isIsolatedObject;
@end


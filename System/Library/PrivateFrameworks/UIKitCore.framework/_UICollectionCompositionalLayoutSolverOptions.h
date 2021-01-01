/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _UICollectionCompositionalLayoutSolverOptions : NSObject {

	BOOL _layoutRTL;
	BOOL _roundsToScreenScale;
	double _interSectionSpacing;
	Class _layoutAttributesClass;
	Class _invalidationContextClass;
	/*^block*/id _invalidationHandler;
	NSArray* _globalSupplementaryItems;
	/*^block*/id _decorationRegistrationHandler;

}

@property (assign,nonatomic) double interSectionSpacing;                    //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,retain) Class layoutAttributesClass;                   //@synthesize layoutAttributesClass=_layoutAttributesClass - In the implementation block
@property (nonatomic,retain) Class invalidationContextClass;                //@synthesize invalidationContextClass=_invalidationContextClass - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                      //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                          //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSArray * globalSupplementaryItems;              //@synthesize globalSupplementaryItems=_globalSupplementaryItems - In the implementation block
@property (nonatomic,copy) id decorationRegistrationHandler;                //@synthesize decorationRegistrationHandler=_decorationRegistrationHandler - In the implementation block
+(id)defaultOptions;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInterSectionSpacing:(double)arg1 ;
-(double)interSectionSpacing;
-(Class)invalidationContextClass;
-(Class)layoutAttributesClass;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(BOOL)layoutRTL;
-(void)setLayoutAttributesClass:(Class)arg1 ;
-(void)setInvalidationContextClass:(Class)arg1 ;
-(BOOL)roundsToScreenScale;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(void)setGlobalSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationRegistrationHandler:(id)arg1 ;
-(NSArray *)globalSupplementaryItems;
-(id)decorationRegistrationHandler;
@end


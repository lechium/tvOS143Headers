/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKTemplateStyleSheet, IKStyleFactory;

@interface IKViewElementStyleFactory : NSObject {

	IKTemplateStyleSheet* _styleSheet;
	IKStyleFactory* _styleFactory;

}

@property (nonatomic,retain,readonly) IKStyleFactory * styleFactory;              //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,readonly) IKTemplateStyleSheet * styleSheet;                 //@synthesize styleSheet=_styleSheet - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
-(IKTemplateStyleSheet *)styleSheet;
-(IKStyleFactory *)styleFactory;
-(void)setViewElementStylesDirty;
-(id)styleComposerForElement:(id)arg1 elementStyleOverrides:(id)arg2 ;
-(id)initWithMarkup:(id)arg1 styleSheet:(id)arg2 ;
@end


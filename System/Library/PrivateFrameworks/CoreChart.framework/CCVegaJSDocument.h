/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCVegaJSDocumentInterface.h>

@class CCVegaHTMLElement, CCVegaRenderer;

@interface CCVegaJSDocument : NSObject <CCVegaJSDocumentInterface> {

	CCVegaRenderer* renderer;
	CCVegaHTMLElement* body;

}

@property (assign,nonatomic,__weak) CCVegaRenderer * renderer; 
@property (nonatomic,retain) CCVegaHTMLElement * body; 
-(id)init;
-(void)setBody:(CCVegaHTMLElement *)arg1 ;
-(CCVegaHTMLElement *)body;
-(CCVegaRenderer *)renderer;
-(void)setRenderer:(CCVegaRenderer *)arg1 ;
-(id)createElementWithString:(id)arg1 ;
@end


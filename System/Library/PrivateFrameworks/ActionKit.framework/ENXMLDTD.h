/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKit/ActionKit-Structs.h>
@class NSString;

@interface ENXMLDTD : NSObject {

	xmlDtd* _dtd;
	NSString* _docTypeDeclaration;

}

@property (nonatomic,retain) NSString * docTypeDeclaration;              //@synthesize docTypeDeclaration=_docTypeDeclaration - In the implementation block
+(void)initialize;
+(id)dtdWithBundleResource:(id)arg1 ofType:(id)arg2 ;
+(id)enexDTD;
+(id)enml2dtd;
+(id)lat1DTD;
+(id)symbolDTD;
+(id)specialDTD;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)arg1 ;
-(xmlEntity*)xmlEntityNamed:(id)arg1 ;
-(xmlElement*)xmlElementNamed:(id)arg1 ;
-(BOOL)isElementLegal:(id)arg1 ;
-(id)sanitizedAttributes:(id)arg1 forElement:(id)arg2 ;
-(BOOL)isAttributeLegal:(id)arg1 inElement:(id)arg2 ;
-(NSString *)docTypeDeclaration;
-(void)setDocTypeDeclaration:(NSString *)arg1 ;
@end

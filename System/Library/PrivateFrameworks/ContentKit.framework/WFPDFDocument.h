/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@class NSArray;

@interface WFPDFDocument : NSObject {

	BOOL _encrypted;
	BOOL _locked;
	BOOL _allowsPrinting;
	BOOL _allowsCopying;
	CGPDFDocumentRef _documentRef;
	NSArray* _pages;

}

@property (nonatomic,retain) NSArray * pages;                                     //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) CGPDFDocumentRef documentRef;                      //@synthesize documentRef=_documentRef - In the implementation block
@property (nonatomic,readonly) int majorVersion; 
@property (nonatomic,readonly) int minorVersion; 
@property (assign,getter=isEncrypted,nonatomic) BOOL encrypted;                   //@synthesize encrypted=_encrypted - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;                         //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL allowsPrinting;                                 //@synthesize allowsPrinting=_allowsPrinting - In the implementation block
@property (assign,nonatomic) BOOL allowsCopying;                                  //@synthesize allowsCopying=_allowsCopying - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPageCount; 
@property (nonatomic,readonly) Class pageClass; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)isLocked;
-(int)majorVersion;
-(int)minorVersion;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isEncrypted;
-(void)setEncrypted:(BOOL)arg1 ;
-(NSArray *)pages;
-(void)setPages:(NSArray *)arg1 ;
-(id)initWithDocumentRef:(CGPDFDocumentRef)arg1 ;
-(BOOL)unlockWithPassword:(id)arg1 ;
-(BOOL)allowsPrinting;
-(BOOL)allowsCopying;
-(unsigned long long)expectedPageCount;
-(Class)pageClass;
-(CGPDFDocumentRef)documentRef;
-(void)setAllowsPrinting:(BOOL)arg1 ;
-(void)setAllowsCopying:(BOOL)arg1 ;
@end


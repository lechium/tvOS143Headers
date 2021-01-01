/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class ONOXMLDocument;

@interface ONOXPathEnumerator : NSEnumerator <NSFastEnumeration> {

	xmlXPathObject* _xmlXPath;
	unsigned long long _cursor;
	ONOXMLDocument* _document;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;               //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (assign,nonatomic) unsigned long long cursor;              //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,retain) ONOXMLDocument * document;              //@synthesize document=_document - In the implementation block
-(void)dealloc;
-(id)objectAtIndex:(long long)arg1 ;
-(id)allObjects;
-(id)nextObject;
-(unsigned long long)cursor;
-(void)setCursor:(unsigned long long)arg1 ;
-(ONOXMLDocument *)document;
-(void)setDocument:(ONOXMLDocument *)arg1 ;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ASKNQMLParser.h>

@interface _TtC11AppStoreKitP33_9642CCE02323FAF22DDBBFD3680E3E9F19NqmlStringGenerator : NSObject <ASKNQMLParser> {

	 parser;
	 configuration;
	 orderedListTracker;
	 accumulator;
	 attributeStack;
	 didParseEverything;
	 foregroundColor;

}
-(id)init;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3 ;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2 ;
-(void)parserDidStartListElement:(id)arg1 ;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2 ;
-(void)parserDidFindNewline:(id)arg1 ;
-(void)parserDidEndListElement:(id)arg1 ;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2 ;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2 ;
@end

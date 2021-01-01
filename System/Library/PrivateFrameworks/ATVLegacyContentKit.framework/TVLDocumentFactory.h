/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVLDocumentFactory : NSObject
+(id)feedDocumentWithXMLDocument:(id)arg1 javaScriptContext:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
+(id)feedDocumentWithXMLDocument:(id)arg1 sourceURL:(id)arg2 error:(id*)arg3 ;
+(id)feedDocumentWithDictionary:(id)arg1 ;
+(id)atvSchema;
+(id)feedDocumentWithXMLDocument:(id)arg1 sourceURL:(id)arg2 jsContext:(id)arg3 jsXMLDocument:(id)arg4 error:(id*)arg5 ;
+(BOOL)updateFeedDocument:(id)arg1 withXMLDocument:(id)arg2 error:(id*)arg3 ;
+(id)_feedDocumentErrorFromXMLError:(id)arg1 ;
+(void)_evaluateScripts:(id)arg1 inContext:(id)arg2 ;
+(id)feedDocumentWithXMLDocument:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
@end

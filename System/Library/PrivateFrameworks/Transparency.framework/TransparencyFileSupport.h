/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TransparencyFileSupport : NSObject
+(long long)directorySizeInKB:(id*)arg1 ;
+(id)appSupportPath:(id*)arg1 ;
+(BOOL)deleteFile:(id)arg1 error:(id*)arg2 ;
+(id)readDictionaryFromFile:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeDictionaryToFile:(id)arg1 fileName:(id)arg2 error:(id*)arg3 ;
+(BOOL)setProtectionToClassDForURL:(id)arg1 error:(id*)arg2 ;
+(id)readDataFromFile:(id)arg1 error:(id*)arg2 ;
@end


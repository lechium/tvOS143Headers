/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
+(id)defaultManager;
+(id)defaultHFSFileManager;
-(id)MIMETypeOfPathExtension:(id)arg1 ;
-(id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2 ;
-(id)pathExtensionForMIMEType:(id)arg1 ;
-(id)UTITypeOfMimeType:(id)arg1 ;
-(id)MIMETypeOfPath:(id)arg1 ;
-(id)pathExtensionForUTIType:(id)arg1 ;
-(id)UTITypeOfPath:(id)arg1 ;
-(id)UTITypeOfPathExtension:(id)arg1 ;
@end


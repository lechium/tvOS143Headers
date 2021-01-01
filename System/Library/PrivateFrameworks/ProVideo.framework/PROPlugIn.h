/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugIn : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)version;
-(id)infoDictionary;
-(id)bundle;
-(id)group;
-(id)displayName;
-(id)className;
-(CFUUIDRef)uuid;
-(BOOL)isBlocked;
-(void)setIsBlocked:(BOOL)arg1 ;
-(Class)plugInClass;
-(id)plugInInstance;
-(id)pluginKitPlug;
-(id)implementedProtocols;
-(id)blockedLookupKey;
-(BOOL)isEqualToPlugIn:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 delegate:(id)arg3 ;
-(void)setBlockedLookupKey:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(id)sharedPlugInInstance;
-(id)helpURL;
-(id)apiUsedByPlugInForProtocol:(id)arg1 ;
-(id)infoString;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotifications/UserNotifications-Structs.h>
#import <CoreFoundation/NSURL.h>

@class NSString;

@interface UNSecurityScopedURL : NSURL {

	NSString* _sandboxExtensionClass;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_allowsDirectEncoding;
-(id)_issueSandboxExtension;
-(id)initFileURLWithPath:(id)arg1 sandboxExtensionClass:(id)arg2 ;
@end


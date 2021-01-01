/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMAP/IMAPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>
#import <libobjc.A.dylib/MFClientTokenAuthProtocol.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class MFPromise, NSURLCredential, NSString;

@interface GmailAccount : IMAPAccount <MFOAuth2TokenAuthProtocol, MFClientTokenAuthProtocol, NSURLSessionDataDelegate> {

	MFPromise* _enablingPromise;
	NSURLCredential* _credential;
	NSString* _clientToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostname;
+(id)accountTypeIdentifier;
+(id)displayedAccountTypeString;
+(id)authSchemesForAccountClass;
+(BOOL)isPredefinedAccountType;
+(BOOL)usernameIsEmailAddress;
+(id)emailAddressHostPart;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)imapNotEnabledPrefix;
-(void)dealloc;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPassword:(id)arg1 ;
-(id)hostname;
-(id)accountStore;
-(id)clientToken;
-(id)emailAddresses;
-(BOOL)supportsArchiving;
-(BOOL)shouldArchiveByDefault;
-(int)archiveDestinationForMailbox:(id)arg1 ;
-(void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2 ;
-(id)preferredAuthScheme;
-(unsigned long long)credentialAccessibility;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldEnableAfterError:(id)arg1 ;
-(BOOL)enableAccount;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(void)_deleteHook;
-(id)allMailMailboxUid;
-(int)emptyFrequencyForMailboxType:(int)arg1 ;
-(id)statisticsKind;
-(BOOL)archiveSentMessages;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)displayNameUsingSpecialNamesForMailboxUid:(id)arg1 ;
-(id)persistentNameForMailbox:(id)arg1 ;
-(id)iconString;
-(BOOL)supportsFastRemoteBodySearch;
-(id)errorForResponse:(id)arg1 ;
-(id)_consumeExistingPreAuthToken;
-(id)_URLFromUncleanString:(id)arg1 ;
-(id)_webLoginErrorWithURL:(id)arg1 ;
-(void)_removeCredential:(id)arg1 ;
-(id)specialUseAttributeForType:(int)arg1 ;
-(id)specialUseAttributesForMailbox:(id)arg1 ;
-(BOOL)xListSupportedOnConnection:(id)arg1 ;
@end


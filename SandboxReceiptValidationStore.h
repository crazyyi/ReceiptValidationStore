//
//  SandboxReceiptValidationStore.h
//  ChinesePod
//
//  Created by Yi Zeng on 5/7/14.
//

#import <Foundation/Foundation.h>

@interface SandboxReceiptValidationStore : NSObject

- (NSDictionary *)getStoreReceipt:(BOOL)sandbox;

- (NSString*)base64forData:(NSData*)theData;
@end

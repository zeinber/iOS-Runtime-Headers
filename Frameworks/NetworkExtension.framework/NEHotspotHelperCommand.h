/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotHelperCommand : NSObject {
    struct __CNPluginCommand { } *_command;
}

@property struct __CNPluginCommand { }*command;
@property (readonly) int commandType;
@property (readonly) NSString *interfaceName;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (struct __CNPluginCommand { }*)command;
- (int)commandType;
- (id)createResponse:(int)arg1;
- (id)createTCPConnection:(id)arg1;
- (id)createUDPSession:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCommand:(struct __CNPluginCommand { }*)arg1;
- (id)interfaceName;
- (id)network;
- (id)networkList;
- (void)setCommand:(struct __CNPluginCommand { }*)arg1;

@end
